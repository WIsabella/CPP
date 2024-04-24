#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string input_filename = "output0.txt";  // 输入的文本文件名
    std::string output_filename = "output.bin";  // 输出的二进制文件名
    std::string line;
    int line_number = 1;

    // 打开输入文件
    std::ifstream input_file(input_filename, std::ios::in);
    if (!input_file.is_open()) {
        std::cerr << "无法打开输入文件: " << input_filename << std::endl;
        return 1;
    }

    // 创建输出文件
    std::ofstream output_file(output_filename, std::ios::binary);
    if (!output_file.is_open()) {
        std::cerr << "无法创建输出文件: " << output_filename << std::endl;
        input_file.close();
        return 1;
    }

    // 读取并处理每一行
    while (std::getline(input_file, line)) {
        // 将行号转换为字符串并添加到行首
        std::string numbered_line = std::to_string(line_number) + ": " + line + "\n";
        // 以二进制形式写入到输出文件
        output_file.write(numbered_line.c_str(), numbered_line.size());
        line_number++;
    }

    // 关闭文件
    input_file.close();
    output_file.close();

    std::cout << "文本文件的每一行已添加行号并写入到文件 " << output_filename << " 中。" << std::endl;
    return 0;
}
