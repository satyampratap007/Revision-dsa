nt temp{1};
    for (size_t i = 0; i < n; i++)
    {

        for (size_t j{i}; j < n-1 ; ++j )
        {
            cout  << " ";
        }

        for (size_t k{1} ;k < 2*temp; ++k)
        {
            cout << "*";
        }
        temp++;        
        cout << "\n";  
    }