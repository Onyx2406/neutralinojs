#ifndef NEU_HELPERS_H
#define NEU_HELPERS_H

#include <vector>
#include <string>

#include "lib/json/json.hpp"

using namespace std;
using json = nlohmann::json;

namespace helpers {

vector<string> split(const string &s, char delim);
string generateToken();
void urldecode(char *dst, const char *src);
char* cStrCopy(const string &str);
json makeMissingArgErrorPayload();
json makeErrorPayload(const string &code, const string &message);
bool hasRequiredFields(const json &input, const vector<string> &keys);
bool hasField(const json &input, const string &key);
vector <string> getModes();
string normalizePath(string &path);

} // namespace helpers

#endif // #define NEU_HELPERS_H


