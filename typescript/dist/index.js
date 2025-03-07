"use strict";
var __awaiter = (this && this.__awaiter) || function (thisArg, _arguments, P, generator) {
    function adopt(value) { return value instanceof P ? value : new P(function (resolve) { resolve(value); }); }
    return new (P || (P = Promise))(function (resolve, reject) {
        function fulfilled(value) { try { step(generator.next(value)); } catch (e) { reject(e); } }
        function rejected(value) { try { step(generator["throw"](value)); } catch (e) { reject(e); } }
        function step(result) { result.done ? resolve(result.value) : adopt(result.value).then(fulfilled, rejected); }
        step((generator = generator.apply(thisArg, _arguments || [])).next());
    });
};
var __generator = (this && this.__generator) || function (thisArg, body) {
    var _ = { label: 0, sent: function() { if (t[0] & 1) throw t[1]; return t[1]; }, trys: [], ops: [] }, f, y, t, g = Object.create((typeof Iterator === "function" ? Iterator : Object).prototype);
    return g.next = verb(0), g["throw"] = verb(1), g["return"] = verb(2), typeof Symbol === "function" && (g[Symbol.iterator] = function() { return this; }), g;
    function verb(n) { return function (v) { return step([n, v]); }; }
    function step(op) {
        if (f) throw new TypeError("Generator is already executing.");
        while (g && (g = 0, op[0] && (_ = 0)), _) try {
            if (f = 1, y && (t = op[0] & 2 ? y["return"] : op[0] ? y["throw"] || ((t = y["return"]) && t.call(y), 0) : y.next) && !(t = t.call(y, op[1])).done) return t;
            if (y = 0, t) op = [op[0] & 2, t.value];
            switch (op[0]) {
                case 0: case 1: t = op; break;
                case 4: _.label++; return { value: op[1], done: false };
                case 5: _.label++; y = op[1]; op = [0]; continue;
                case 7: op = _.ops.pop(); _.trys.pop(); continue;
                default:
                    if (!(t = _.trys, t = t.length > 0 && t[t.length - 1]) && (op[0] === 6 || op[0] === 2)) { _ = 0; continue; }
                    if (op[0] === 3 && (!t || (op[1] > t[0] && op[1] < t[3]))) { _.label = op[1]; break; }
                    if (op[0] === 6 && _.label < t[1]) { _.label = t[1]; t = op; break; }
                    if (t && _.label < t[2]) { _.label = t[2]; _.ops.push(op); break; }
                    if (t[2]) _.ops.pop();
                    _.trys.pop(); continue;
            }
            op = body.call(thisArg, _);
        } catch (e) { op = [6, e]; y = 0; } finally { f = t = 0; }
        if (op[0] & 5) throw op[1]; return { value: op[0] ? op[1] : void 0, done: true };
    }
};
var input = document.querySelector(".input-value");
var submitForm = document.querySelector(".form");
var mainBox = document.querySelector(".main-box");
var notfound = document.querySelector(".no-matech-error");
function fetchData(url) {
    return __awaiter(this, void 0, void 0, function () {
        var res, data;
        return __generator(this, function (_a) {
            switch (_a.label) {
                case 0: return [4 /*yield*/, fetch(url)];
                case 1:
                    res = _a.sent();
                    if (!res.ok) {
                        throw new Error("HTTP error! status: ".concat(res.status));
                    }
                    return [4 /*yield*/, res.json()];
                case 2:
                    data = _a.sent();
                    return [2 /*return*/, data];
            }
        });
    });
}
function showResult(user) {
    var login = user.login, avatar_url = user.avatar_url, url = user.url;
    mainBox.innerHTML += "\n    <div class=\"card-view\">\n      <img src=\"".concat(avatar_url, "\" alt=\"").concat(login, "\" class=\"w-100 h-auto\">\n      <div>\n        <img src=\"").concat(avatar_url, "\" alt=\"").concat(login, "\" class=\"w-25 p-3\">\n        <h5 class=\"ms-2\">").concat(login, "</h5>\n        <a href=\"").concat(url, "\" target=\"_blank\" class=\"btn ms-5\">View Profile</a>\n      </div>\n    </div>\n  ");
}
function fetchUserData(url) {
    fetchData(url)
        .then(function (userInfo) {
        mainBox.innerHTML = "";
        var filteredUsers = userInfo.filter(function (user) {
            return user.login.toLowerCase().includes(input.value.toLowerCase());
        });
        if (filteredUsers.length === 0) {
            notfound.innerHTML = "no match found";
            return;
        }
        filteredUsers.forEach(function (user) {
            showResult(user);
        });
    })
        .catch(function (error) {
        console.error("Error fetching user data:", error);
    });
}
input.addEventListener("input", function (event) {
    fetchUserData("https://api.github.com/users");
});
fetchUserData("https://api.github.com/users");
