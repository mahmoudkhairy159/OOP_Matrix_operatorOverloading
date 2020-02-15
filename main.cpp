#include <iostream>

using namespace std;


class Matrix
{
private:
    int **matrix;
    int r;
    int c;
public:
    Matrix( int rows=0,int cols=0)
    {
        r=rows;
        c=cols;
        matrix=new int*[rows];
        for(int i=0; i<rows; i++)
        {
            matrix[i]=new int[cols];
        }
    }

    friend ostream &operator<<( ostream &output, const Matrix &m )
    {
        for(int i=0; i<m.r; i++)
        {
            for(int j=0; j<m.c; j++)
            {
                output << m.matrix[i][j]<<"\t";
            }
            output<<endl;
        }
        return output;
    }

    friend istream &operator>>( istream  &input, Matrix &m )
    {
        for(int i=0; i<m.r; i++)
        {
            for(int j=0; j<m.c; j++)
            {
                input>> m.matrix[i][j];
            }
        }
        return input;
    }

    Matrix operator+(const Matrix& m)
    {
        Matrix temp(this->r,this->c);
        for(int i=0; i<m.r; i++)
        {
            for(int j=0; j<m.c; j++)
            {
                temp.matrix[i][j] = this->matrix[i][j] + m.matrix[i][j];
            }
        }
        return temp;
    }

    Matrix operator-(const Matrix& m)
    {
        Matrix temp(this->r,this->c);
        for(int i=0; i<m.r; i++)
        {
            for(int j=0; j<m.c; j++)
            {
                temp.matrix[i][j] = this->matrix[i][j] - m.matrix[i][j];
            }
        }
        return temp;
    }
    Matrix operator*(const Matrix& m)
    {
        Matrix temp(this->r,this->c);
        for(int i=0; i<m.r; i++)
        {
            for(int j=0; j<m.c; j++)
            {
                temp.matrix[i][j] = this->matrix[i][j] * m.matrix[i][j];
            }
        }
        return temp;
    }
    Matrix operator / (const Matrix& m)
    {
        Matrix temp(this->r,this->c);
        for(int i=0; i<m.r; i++)
        {
            for(int j=0; j<m.c; j++)
            {
                temp.matrix[i][j] = this->matrix[i][j] / m.matrix[i][j];
            }
        }
        return temp;
    }

    void operator = (const Matrix &m )
    {
        for(int i=0; i<m.r; i++)
        {
            for(int j=0; j<m.c; j++)
            {
                matrix[i][j]= m.matrix[i][j];
            }
        }
    }

    void transpose ()
    {
        cout<<"Transposed matrix: \n";
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < r; j++)
            {
                cout<<matrix[j][i]<<"\t";
            }
            cout<<endl;
        }

    }

};



int main()
{
    Matrix m1(1,2);
    Matrix m2(1,2);
    Matrix m3(1,2);

    cin>>m1;
    cin>>m2;
    m3=m1+m2;
    cout<<"Addition: \n"<<m3<<endl;
    m3=m1-m2;
    cout<<"Subtraction: \n"<<m3<<endl;
    m3=m1*m2;
    cout<<"Multiplication: \n"<<m3<<endl;
    m3=m1/m2;
    cout<<"Division: \n"<<m3<<endl;
    m3.transpose();


    return 0;
}
