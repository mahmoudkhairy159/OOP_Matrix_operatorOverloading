#include <iostream>

using namespace std;

template<typename T>
class Matrix{
private:
    int rows ,cols;
    T **matrix;
public:
    Matrix(int rows , int cols){
        this->rows=rows;
        this->cols=cols;
        this->matrix=new T*[rows];
        for(int i =0; i<rows;i++){
            matrix[i]=new T[cols];
        }
    }

    ~Matrix(){
        for(int i =0; i<rows;i++){
            delete[]this->matrix[i];

        }
        delete[]this->matrix;
        this->matrix=NULL;
    }


    friend ostream &operator<<( ostream &output, const Matrix &m )
    {
        for(int i=0; i<m.rows; i++)
        {
            for(int j=0; j<m.cols; j++)
            {
                output << m.matrix[i][j]<<"\t";
            }
            output<<endl;
        }
        return output;
    }

    friend istream &operator>>( istream  &input, Matrix &m )
    {
        for(int i=0; i<m.rows; i++)
        {
            for(int j=0; j<m.cols; j++)
            {
                input>> m.matrix[i][j];
            }
        }
        return input;
    }


     Matrix operator + (Matrix const &m){
         Matrix <T>temp(this->rows,this->cols);
        for(int i=0; i<m.rows; i++)
        {
            for(int j=0; j<m.cols; j++)
            {
                temp.matrix[i][j] = this->matrix[i][j] + m.matrix[i][j];
            }
        }
         return temp;
    }

    Matrix operator - (Matrix const &m){
         Matrix <T>temp(this->rows,this->cols);
        for(int i=0; i<m.rows; i++)
        {
            for(int j=0; j<m.cols; j++)
            {
                temp.matrix[i][j] = this->matrix[i][j] - m.matrix[i][j];
            }
        }
         return temp;
    }


    Matrix operator * (Matrix const &m){
         Matrix <T>temp(this->rows,this->cols);
        for(int i=0; i<m.rows; i++)
        {
            for(int j=0; j<m.cols; j++)
            {
                temp.matrix[i][j] = this->matrix[i][j] *m.matrix[i][j];
            }
        }
         return temp;
    }
    Matrix operator / (Matrix const &m){
         Matrix <T>temp(this->rows,this->cols);
        for(int i=0; i<m.rows; i++)
        {
            for(int j=0; j<m.cols; j++)
            {
                temp.matrix[i][j] = this->matrix[i][j] / m.matrix[i][j];
            }
        }
         return temp;
    }


    void operator = (const Matrix &m )
    {
        for(int i=0; i<m.rows; i++)
        {
            for(int j=0; j<m.cols; j++)
            {
                this->matrix[i][j]= m.matrix[i][j];
            }
        }
    }

     void transpose ()
    {
        cout<<"Transposed matrix: \n";
        for (int i = 0; i < cols; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                cout<<this->matrix[j][i]<<"\t";
            }
            cout<<endl;
        }

    }






};

int main()
{
    Matrix<int>m1(2,2);
    Matrix<int>m2(2,2);
    Matrix<int>m3(2,2);
    cout<<"Enter m1 \n";
    cin>>m1;
    cout<<"Enter m2 \n";
    cin>>m2;
    m3=m1+m2;
    cout<<"m1+m2 equals: \n";
    cout<<m3;
    m3=m1-m2;
    cout<<"m1-m2 equals: \n";
    cout<<m3;
    m3=m1*m2;
    cout<<"m1 * m2 equals: \n";
    cout<<m3;
    m3=m1 / m2;
    cout<<"m1 / m2 equals: \n";
    cout<<m3;
    m3.transpose();










    return 0;
}
