#include <iostream>
#include <string>
#include <cctype> // для tolower
#include <limits> // для numeric_limits
#include <cmath>  // для isnan

class BinaryTree
{
public:
    double data;
    BinaryTree* left;
    BinaryTree* right;

    BinaryTree(double num) : data(num), left(nullptr), right(nullptr) {}

    void addVal(double num)
    {
        if (num < data)
        {
            if (left != nullptr) left->addVal(num);
            else left = new BinaryTree(num);
        }
        else if (num > data)
        {
            if (right != nullptr) right->addVal(num);
            else right = new BinaryTree(num);
        }
    }
};

void printTree(BinaryTree* root, const std::string& prefix = "", bool isLeft = true)
{
    if (root == nullptr) return;

    // Displaying current node:
    std::cout << prefix;
    std::cout << (isLeft ? "├──" : "└──");
    std::cout << root->data << std::endl;

    // Recursive calling left and right sub trees:
    printTree(root->left, prefix + (isLeft ? "│   " : "    "), true);
    printTree(root->right, prefix + (isLeft ? "│   " : "    "), false);
}

double getNumberInput()
{
    using namespace std;
    std::string input;
    while(true) {
        cout << "Press 'q' to quit\n";
        cout << "Enter number to insert in Binary Tree: ";
        std::getline(std::cin, input);

        input.erase(0, input.find_first_not_of(' '));
        input.erase(input.find_last_not_of(' ') + 1);

        if (!input.empty() && tolower(input[0] == 'q'))
            return std::numeric_limits<double>::quiet_NaN();

        try {
            size_t pos;
            double number = std::stod(input, &pos);
            if (pos == input.size()) return number;
            else cout << "You entered wrong input. Try again.\n";
        } catch (const std::invalid_argument&) {
            std::cout << "Error: The value is not a number. Try again.\n";
        } catch (const std::out_of_range&) {
            std::cout << "Error: The value is out of range. Try again.\n";
        }
        
    }
}


int main()
{
    using namespace std;

    double *num=new double;
    BinaryTree *tree = nullptr;
    
    while (true) {
        double number = getNumberInput();
        if (isnan(number)) {
            cout << "Exiting...\n";
            break;
        }
        if (!tree) tree = new BinaryTree(number);
        else {
            tree -> addVal(number);
            cout << "Your tree looks this now: " << endl;
            printTree(tree);
        }
    }

    delete tree;

    return 0;
}
