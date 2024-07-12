#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <algorithm>

using namespace std;

class AutoCompleteSystem {
public:
    // Word class to store the frequency and the word itself
    class Word {
    public:
        int freq; // frequency
        string w; // word
        Word(string w_, int freq_) : w(w_), freq(freq_) {}
    };

    // Trie Node class
    class TrieNode {
    public:
        unordered_map<char, TrieNode*> children; // map of child nodes
        unordered_map<string, int> count; // map to store word frequency
        TrieNode() {}
    };

    TrieNode* root; // root node of the Trie
    TrieNode* cur;  // current node pointer
    string ss;      // current input string

    AutoCompleteSystem(vector<string>& sentences, vector<int>& times) {
        root = new TrieNode();
        for (int i = 0; i < sentences.size(); ++i) {
            add(sentences[i], times[i]);
        }
        cur = root;
    }

    // function to add a word to the Trie and update the frequency
    void add(string sentence, int times) {
        auto cur = root;
        for (const auto c : sentence) {
            if (cur->children[c] == nullptr) {
                cur->children[c] = new TrieNode();
            }
            cur = cur->children[c];
            cur->count[sentence] += times;
        }
    }

    // function to handle input character by character and return autocomplete suggestions
    vector<string> input(char c) {
        vector<string> res;
        if (c == '#') {
            add(ss, 1);
            ss.clear();
            cur = root;
            return res;
        }
        ss += c;
        if (cur == nullptr) return res;
        cur = cur->children[c];
        if (cur == nullptr) return res;

        // define a custom comparison function for the priority queue based on frequency and word lexicographical order
        auto cmp = [](const pair<int, string>& a, const pair<int, string>& b) {
            if (a.first != b.first) return a.first > b.first;
            return a.second < b.second;
        };

        priority_queue<pair<int, string>, vector<pair<int, string>>, decltype(cmp)> pq(cmp);

        for (const auto& p : cur->count) {
            pq.push({p.second, p.first});
            if (pq.size() > 3) pq.pop();
        }

        while (!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }
};

// Example usage
int main() {
    vector<string> sentences = {"i love you", "island", "ironman", "i love geeksforgeeks"};
    vector<int> times = {5, 3, 2, 2};
    AutoCompleteSystem* obj = new AutoCompleteSystem(sentences, times);

    vector<string> result = obj->input('i');
    for (const auto& s : result) {
        cout << s << endl;
    }

    result = obj->input(' ');
    for (const auto& s : result) {
        cout << s << endl;
    }

    result = obj->input('a');
    for (const auto& s : result) {
        cout << s << endl;
    }

    result = obj->input('#');
    for (const auto& s : result) {
        cout << s << endl;
    }

    return 0;
}
