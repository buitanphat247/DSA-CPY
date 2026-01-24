#!/bin/bash

# Script tự động đẩy code lên GitHub
# Usage: ./auto_push.sh [commit message]

REPO_DIR="/media/buitanphat/Document/Workspace/Python-Exercise"
cd "$REPO_DIR" || exit 1

# Kiểm tra xem có thay đổi không
if [ -z "$(git status --porcelain)" ]; then
    echo "Không có thay đổi nào để commit."
    exit 0
fi

# Lấy commit message từ tham số hoặc tự động tạo
if [ -z "$1" ]; then
    COMMIT_MSG="Auto commit: $(date '+%Y-%m-%d %H:%M:%S')"
else
    COMMIT_MSG="$1"
fi

echo "Đang stage các thay đổi..."
git add .

echo "Đang commit với message: $COMMIT_MSG"
git commit -m "$COMMIT_MSG"

echo "Đang push lên GitHub..."
git push origin main

if [ $? -eq 0 ]; then
    echo "✅ Đã đẩy code lên GitHub thành công!"
else
    echo "❌ Có lỗi xảy ra khi push lên GitHub."
    exit 1
fi
