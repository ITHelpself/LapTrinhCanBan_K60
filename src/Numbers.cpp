enum SortOption{
    int ASC = 1;// tăng dần
    int DEC = 2; // giảm dần
 };
 // định nghĩa các hàm
void addElement(int numbers[],int *size, int element); // thêm một element vào cuối mảng
bool insertElement(int numbers[], int *size, int element, int index);// thêm 1 element vào vị trí bất kì trong mảng
void appendToHead(int numbers[], int *size, int numbersToAppend[], int sizeOfNumbersToAppend);// chèn một mảng vào đầu một mảng khác
void appendToTail(int numbers[], int *size, int numbersToAppend[], int sizeOfNumbersToAppend);// chèn một mảng vào cuối mảng khác
bool update(int numbers[], int size, int value, int index);// thay đổi giá trị value tại vị trí index
bool deleteByIndex(int numbers[], int *size, int index);// xóa thông qua index nhập vào
bool deleteByValue(int numbers[], int *size, int value);// xóa các phần tử có value nhập vào
int* findIndexByValue(int numbers[], int *size, int value); // tìm index của các phần tử dựa vào value
int* findIndexOfOddElements(int number[], int size);// tìm vị trí phần tử lẻ trong mảng
int* findIndexOfEvenElements(int number[], int size);// tìm vị trí của các phần tử chẵn trong mảng
int findMaxValue(int numbers[],int size);// tìm max mảng
int findMinValue(int numbers[], int size);// tìm min mảng
int findValueOfIndex(int numbers[], int size, int index);// giá trị của phần tử tại vị trí thứ index
int sort(int numbers[], int size, SortOption option);// sắp xếp theo option được nhập vào
void OrderByASC(int numbers[], int size);// sắp xếp tăng dần
void OrderByDEC(int numbers[], int size);// sắp xếp giảm dần
bool isEmpty(int numbers[], int size);
bool isChild(int numbers[], int size, int checkerNumbers[], int sizeOfCheckerNumbers);
bool isParent(int number[], int size, int checkerNumbers[], int sizeOfCheckerNumbers);
bool existPrime(int numbers[], int size);// kiểm tra mảng có tồn tại số nguyên tố hay không?
bool areAllOddNumbers(int numbers[], int size);// kiểm tra có phải toàn số lẻ hay không?
void swap(int *destination, int *source);
void printMaxValue(int numbers[], int size);
void printPrimeNumbers(int number[], int size);
// TODO: Bổ sung thêm hàm
int main(){
    return 0;
}
// TODO: Hoàn thiện các hàm định nghĩa