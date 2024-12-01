// SolveNQueens.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include <vector>
#include <string.h>

using std::vector;
using std::string;

class Solution {
private:
    vector<vector<string>> result;
    bool IsValid(vector<string>& board, uint32_t row, int col) {
        for (int i = row - 1; i >= 0; i--) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        for (int i = row - 1, j = col + 1; i >= 0 && j < board.size(); i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void BackTrack(vector<string> &board, uint32_t row) {
            if (row == board.size()) {
                result.push_back(board);
                return;
            }

            for (uint32_t j = 0; j < board.size(); j++) {
                if (IsValid(board, row,j)) {
                    board[row][j] = 'Q';
                    BackTrack(board, row + 1);
                    board[row][j] = '.';
                }
            }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        BackTrack(board, 0);
        return result;
    }
};

// TODO: 在此处引用程序需要的其他标头。
