#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#ifndef PROJECT_4_MAT_HPP
#define PROJECT_4_MAT_HPP

#include <iostream>
#include <chrono>
#include <fstream>

using namespace std;
using namespace chrono;

enum DataType {
    U_CHAR, SHORT, INT, LONG, FLOAT, DOUBLE
};

template<typename Tp>
class Mat {

public:
    Mat();
    Mat(const Mat<Tp> &);
    Mat(size_t rows_, size_t cols_, int channels_);
    Mat(size_t rows_, size_t cols_, int channels_, initializer_list<string> pathList);
    explicit Mat(const string &path);
    ~Mat();

    Tp &operator()(size_t i, size_t j, int channelIndex = 0);
    Mat<Tp> operator+(const Mat<Tp> &) const;
    Mat<Tp> operator-(const Mat<Tp> &) const;
    Mat<Tp> operator*(const Mat<Tp> &) const;
    Mat<Tp> &operator=(const Mat &);
    bool operator==(const Mat &) const;
    bool operator!=(const Mat &) const;

    [[nodiscard]] Mat<Tp> subMat(size_t _rows_, size_t _cols_, size_t _beginRowIndex_, size_t _beginColIndex_) const;
    [[nodiscard]] Mat<Tp> roi(size_t rowIndex, size_t colIndex, size_t rows_, size_t cols_) const;
    [[nodiscard]] Mat<Tp> clone() const;

    [[nodiscard]] Tp &at(size_t i, size_t j, int channelIndex = 0) const;
    [[nodiscard]] Tp *rowPtr(size_t, int channelIndex = 0) const;
    [[nodiscard]] Tp *colPtr(size_t, int channelIndex = 0) const;

    void print() const;
    void transfer();
    void writeTo(const char *path) const;

    static Mat<Tp> txtRead(const string &);

    [[nodiscard]] size_t getRows() const;
    [[nodiscard]] size_t getCols() const;
    [[nodiscard]] size_t getSteps() const;
    [[nodiscard]] size_t getBeginRowIndex() const;
    [[nodiscard]] size_t getBeginColIndex() const;
    [[nodiscard]] size_t getDataRows() const;
    [[nodiscard]] size_t getDataCols() const;
    [[nodiscard]] int getChannels() const;
    [[nodiscard]] Tp **getData() const;
    [[nodiscard]] int *getRefCntPtr() const;
    [[nodiscard]] DataType getDataType() const;

    void setRefCntPtr(int *ptr);
    void setRows(size_t _rows_);
    void setCols(size_t _cols_);
    void setSteps(size_t _steps_);
    void setBeginRowIndex(size_t _beginRowIndex_);
    void setBeginColIndex(size_t _beginColIndex_);
    void setDataRows(size_t _dataRows_);
    void setDataCols(size_t _dataCols_);
    void setData(Tp **_data_);
    void setChannels(int channels_);
    void setDataType(DataType dataType_);

private:
    size_t rows{};
    size_t cols{};
    size_t steps{};
    size_t beginRowIndex{};
    size_t beginColIndex{};
    size_t dataRows{};
    size_t dataCols{};
    int channels;
    Tp **data{};
    int *refCntPtr{};
    DataType dataType;

    static void singleThreadMul(const Mat &, const Mat &, Mat &, size_t, size_t);
    static Mat<Tp> strassen(Mat<float> mat_A, const Mat<Tp> &mat_B);
    static Mat<Tp> merge(const Mat<Tp> &C11, const Mat<Tp> &C12, const Mat<Tp> &C21, const Mat<Tp> &C22);


};

//region Getter & Setter
template<typename Tp>
size_t Mat<Tp>::getRows() const
{
    return rows;
}

template<typename Tp>
size_t Mat<Tp>::getCols() const
{
    return cols;
}

template<typename Tp>
size_t Mat<Tp>::getSteps() const
{
    return steps;
}

template<typename Tp>
size_t Mat<Tp>::getBeginRowIndex() const
{
    return beginRowIndex;
}

template<typename Tp>
size_t Mat<Tp>::getBeginColIndex() const
{
    return beginColIndex;
}

template<typename Tp>
Tp **Mat<Tp>::getData() const
{
    return data;
}

template<typename Tp>
int *Mat<Tp>::getRefCntPtr() const
{
    return refCntPtr;
}

template<typename Tp>
void Mat<Tp>::setRefCntPtr(int *ptr)
{
    Mat::refCntPtr = ptr;
}

template<typename Tp>
void Mat<Tp>::setRows(size_t _rows_)
{
    Mat::rows = _rows_;
}

template<typename Tp>
void Mat<Tp>::setCols(size_t _cols_)
{
    Mat::cols = _cols_;
}

template<typename Tp>
void Mat<Tp>::setSteps(size_t _steps_)
{
    Mat::steps = _steps_;
}

template<typename Tp>
void Mat<Tp>::setBeginRowIndex(size_t _beginRowIndex_)
{
    Mat::beginRowIndex = _beginRowIndex_;
}

template<typename Tp>
void Mat<Tp>::setBeginColIndex(size_t _beginColIndex_)
{
    Mat::beginColIndex = _beginColIndex_;
}

template<typename Tp>
void Mat<Tp>::setDataRows(size_t _dataRows_)
{
    Mat::dataRows = _dataRows_;
}

template<typename Tp>
void Mat<Tp>::setDataCols(size_t _dataCols_)
{
    Mat::dataCols = _dataCols_;
}

template<typename Tp>
void Mat<Tp>::setData(Tp **_data_)
{
    Mat::data = _data_;
}

template<typename Tp>
size_t Mat<Tp>::getDataRows() const
{
    return dataRows;
}

template<typename Tp>
size_t Mat<Tp>::getDataCols() const
{
    return dataCols;
}

template<typename Tp>
int Mat<Tp>::getChannels() const
{
    return channels;
}

template<typename Tp>
void Mat<Tp>::setChannels(int channels_)
{
    Mat::channels = channels_;
}

template<typename Tp>
DataType Mat<Tp>::getDataType() const
{
    return dataType;
}

template<typename Tp>
void Mat<Tp>::setDataType(DataType dataType_)
{
    Mat::dataType = dataType_;
}
//endregion

//region namespace util
namespace util {

    string *tpStr = new string [6]{"uchar", "short", "int", "long", "float", "double"}; /* NOLINT */

    bool is2ToNPower(size_t dest);

    template<typename Tp>
    Tp **allocate(size_t rows, size_t cols);

    template<typename Tp>
    void read(const string &path, Tp **dest, size_t rows, size_t cols);

    template<typename Tp>
    void array_print(Tp **array, size_t rows, size_t cols);

    template<typename Tp>
    void array_write_cpp(Tp **array, size_t rows, size_t cols, const string &outputPath);

    template<typename Tp>
    void array_write_c(Tp **array, size_t rows, size_t cols, const char *outputPath);

    string tpToString(DataType dataType);

    DataType dataType(const type_info &typeInfo);

    size_t getRowsOfTXTFile(const string &filePath);

    size_t getColsOfTXTFile(const string &filePath);

    //region class Timer
    class Timer {
    private:
        string procedure;
        steady_clock::time_point _start;
        steady_clock::time_point _end;
    public:
        explicit Timer(const string &);
        ~Timer();
    };

    Timer::Timer(const string &name)
    {
        this->procedure = name;
        this->_start = steady_clock::now();
    }

    Timer::~Timer()
    {
        this->_end = steady_clock::now();
        duration<double> consumption = this->_end - this->_start;
        cout << "Procedure [ " << this->procedure << " ] consumed " << consumption.count() * 1000 << "ms." << endl;
    }

    void error();
    //endregion
}

bool util::is2ToNPower(size_t dest)
{
    if (dest & (dest - 1)) {
        return false;
    } else {
        return true;
    }
}

template<typename Tp>
Tp **util::allocate(size_t rows, size_t cols)
{
    auto *oneDimensionArray = static_cast<Tp *>(aligned_alloc(512, rows * cols * sizeof(Tp) + sizeof(int)));
    for (int i = 0; i < rows * cols; i++) {
        oneDimensionArray[i] = {};
    }
    auto **res = static_cast<Tp **>(malloc(sizeof(Tp *) * rows));
    for (size_t i = 0; i < rows; i++) {
        res[i] = oneDimensionArray + i * cols;
    }
    return res;
}

template<typename Tp>
void util::read(const string &path, Tp **dest, size_t rows, size_t cols)
{
    ifstream ifs;
    ifs.open(path);
    if (!ifs.is_open()) {
        cout << "Fail to read file <<" << path << ">>. Exit." << endl;
        exit(EXIT_FAILURE);
    }
    char buffer[32] = {};
    size_t i = 0, j = 0;
    while (ifs >> buffer) {
        if (i == rows && j == cols) {
            break;
        }
        dest[i][j] = (Tp) stof(buffer);
        if (++j >= cols) {
            i++;
            j = 0;
        }
    }
    ifs.close();
}

template<typename Tp>
void util::array_print(Tp **array, size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            printf("%-9.1f", (float) array[i][j]);
        }
        cout << endl;
    }
}

template<typename Tp>
void util::array_write_cpp(Tp **array, size_t rows, size_t cols, const string &outputPath)
{
    ofstream ofs;
    ofs.open(outputPath, ios::out);
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            ofs << array[i][j] << " ";
        }
        ofs << endl;
    }
    ofs.close();
}

template<typename Tp>
void util::array_write_c(Tp **array, size_t rows, size_t cols, const char *outputPath)
{
    FILE *fp;
    if ((fp = fopen(outputPath, "w")) == nullptr) {
        printf("Fail to open or create output file -> %s. Exit.", outputPath);
        exit(EXIT_FAILURE);
    }
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            char *buffer = (char *) malloc(sizeof(char) * 32);
            sprintf(buffer, "%.1f", array[i][j]);
            fputs(buffer, fp);
            if (j < cols - 1) fputs(" ", fp);
            else fputs("\r\n", fp);
            free(buffer);
        }
    }
    fclose(fp);
}

size_t util::getRowsOfTXTFile(const string &filePath)
{
    ifstream ifs;
    ifs.open(filePath, ios::in);
    if (!ifs.is_open()) {
        cout << "Fail to open file \"" << filePath << "\". Exit." << endl;
        exit(EXIT_FAILURE);
    }

    size_t rows = 0;
    string buffer;
    while (getline(ifs, buffer)) {
        rows++;
    }
    ifs.close();

    return rows;
}

size_t util::getColsOfTXTFile(const string &filePath)
{
    ifstream ifs;
    ifs.open(filePath, ios::in);
    if (!ifs.is_open()) {
        cout << "Fail to open file \"" << filePath << "\". Exit." << endl;
        exit(EXIT_FAILURE);
    }

    size_t cols = 0;
    string buffer;
    if (getline(ifs, buffer)) {
        for (char i: buffer) {
            if (i == 32) {
                cols++;
            }
        }
        cols++;
    }
    ifs.close();

    return cols;
}

DataType util::dataType(const type_info &typeInfo)
{
    if (typeInfo == typeid(unsigned char)) {
        return DataType::U_CHAR;
    } else if (typeInfo == typeid(short)) {
        return DataType::SHORT;
    } else if (typeInfo == typeid(int)) {
        return DataType::INT;
    }else if (typeInfo == typeid(long)) {
        return DataType::LONG;
    } else if (typeInfo == typeid(float)) {
        return DataType::FLOAT;
    } else if (typeInfo == typeid(double)) {
        return DataType::DOUBLE;
    } else {
        cout << "Not supporting data type. Exit." << endl;
        exit(EXIT_FAILURE);
    }
}

string util::tpToString(DataType dataType) {
    return tpStr[dataType];
}

void util::error()
{
    cout << "Error" << endl;
}
//endregion

#include "../src/mat.tpp"

#endif //PROJECT_4_MAT_HPP
#pragma clang diagnostic pop