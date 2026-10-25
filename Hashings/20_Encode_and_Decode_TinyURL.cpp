class Solution {
public:

    unordered_map<string, string>  mp;
    int id=0;
    string encode(string longUrl) {
        string key = to_string(id++);
        mp[key]=longUrl;
        return "https://tinyurl.com/"+key;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string key = shortUrl.substr(shortUrl.find_last_of('/') + 1);
        return mp[key];
    }
};