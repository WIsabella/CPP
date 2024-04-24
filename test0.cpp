#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string input_filename = "output0.txt"; // 输入文件名
    std::string output_filename = "output1.txt"; // 输出文件名
    std::string line;
    int line_number = 1;

    // 打开输入文件
    std::ifstream input_file(input_filename, std::ios::in);
    if (!input_file.is_open()) {
        std::cerr << "无法打开输入文件: " << input_filename << std::endl;
        return 1;
    }

    // 创建输出文件
    std::ofstream output_file(output_filename, std::ios::out);
    if (!output_file.is_open()) {
        std::cerr << "无法创建输出文件: " << output_filename << std::endl;
        input_file.close();
        return 1;
    }

    // 读取并处理每一行
    while (std::getline(input_file, line)) {
        output_file << line_number << ": " << line << std::endl;
        line_number++;
    }

    // 关闭文件
    input_file.close();
    output_file.close();
    return 0;
}