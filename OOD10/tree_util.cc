//  Copyright [2022] <Copyright JangJinYoung>
#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include "node.h"
#include "tree_util.h"
#include "int_node.h"
#include "string_node.h"

TreeUtil::TreeUtil() {}
TreeUtil* TreeUtil::instance_ = NULL;

TreeUtil* TreeUtil::GetInstance() {
    if (instance_ == NULL) {
        instance_ = new TreeUtil;
    }
    return instance_;
}


const std::vector<const Node*>
TreeUtil::DepthFirstSearch(const Node* node) const {
    std::stack<const Node*> visit;
    std::vector<const Node*> result;

    visit.push(node);

    while (!visit.empty()) {
        result.push_back(visit.top());
        visit.pop();
        if ((*(result.end()-1))->right() != nullptr) {
            visit.push((*(result.end()-1))->right());
            }
        if ((*(result.end()-1))->left() != nullptr) {
            visit.push((*(result.end()-1))->left());
        }
    }
    return result;
}

const std::vector<const Node*>
TreeUtil::BreadthFirstSearch(const Node* node) const {
    std::queue<const Node*> visit;
    std::vector<const Node*> result;

    visit.push(node);

    while (!visit.empty()) {
        result.push_back(visit.front());
        visit.pop();
        if ((*(result.end()-1))->left() != nullptr) {
            visit.push((*(result.end()-1))->left());
        }
        if ((*(result.end()-1))->right() != nullptr) {
            visit.push((*(result.end()-1))->right());
        }
    }
    return result;
}

