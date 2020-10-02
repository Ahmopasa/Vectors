# Vectors
I would like to share my code here while learning usage of vectors in Cpp.
Information about functions will be added to the Wiki page. 
I also give explanation in the my Medium page.

* `NotLearning();`
     > ID is chosen randomly between 1001 and 101; 

     > Average Score is also chosen randomly between 0 and 100 with remainders.

     > Name is chosen randomly from the array of strings. Since it is _static_ qualified, the whole list occupies memory once.

     > Surname is chosen randomly from the array of strings. Since it is _static_ qualified, the whole list occupies memory once.

     > City Name is chosen randomly from the array of strings. Since it is _static_ qualified, the whole list occupies memory once.

     > Birth Year is chosen randomly between 1989 and 2020.

     > Birth Month is chosen randomly from the array of strings. Since it is _static_ qualified, the whole list occupies memory once.

     > Birth Day is chosen randomly from the array of integers. Also, a special macro was used to take leap years into the account. Since the array is _static_ qualified, the whole list occupies memory once.


*  `fillVector(std::vector<NotLearning>& newClass)`
     > A total amount of element is asked from the user. After that, a vector is being created via C-style for-loop. For every step in the loop, a new object is initialized and pushed back. That function takes one parameter with the type of _NotLearning_.

*  `showVector(const std::vector<NotLearning> newClass)`
     > A simple function to print the elements of the vector. To calculate the size of a vector, _`newClass.size()`_ was used. _`std::flush`_ is also used to flush the buffer. _Note that I'm not familiar with the technology behind **std::flush**_. 

*  `sortVectorByID(std::vector<NotLearning>& newClass)`
     > A simple function used to sort the elements of the vector by ID numbers of its elements. **std::sort** is called. Its third parameter is another function to sort specifically.
     * `cmp_by_id(const NotLearning& one, const NotLearning& two)`
          > That functions take two-parameter as a reference; type of _const_ qualified _NotLearning_. With the help of the _getters_functions, 
     _cmp_by_id_ compares two IDs and returns its result.
     * Functions, that mentioned below, that used inside _std::sort()_ function uses the same concept with _cmp_by_id_;

       `cmp_by_average(const NotLearning& one, const NotLearning& two)`,

       `cmp_by_name(const NotLearning& one, const NotLearning& two)`, 

       `cmp_by_surname(const NotLearning& one, const NotLearning& two)`, 

       `cmp_by_city(const NotLearning& one, const NotLearning& two)`, 

       `cmp_by_day(const NotLearning& one, const NotLearning& two)`, 

       `cmp_by_month(const NotLearning& one, const NotLearning& two)`, 

       `cmp_by_year(const NotLearning& one, const NotLearning& two)`, 

* `sortVectorByDetail(std::vector<NotLearning>& newClass)`
     > This function also takes a pointer to function(if I'm not mistakes) as its third parameter, _cmp_by_detail(const NotLearning& one, const NotLearning& two)_.
     * `cmp_by_detail(const NotLearning& one, const NotLearning& two)_`
     > This little function takes two-parameter as a reference; type of _const_ qualified _NotLearning_. With the help of the _getters_functions, the comparison is first made according to the IDs, then according to the Average Scores, then according to the Names, then according to the Surnames, then according to the Birth City names, then according to the Birth Days, then according to the Birth Months, then according to the Birth Year. At the end the function returns _true_ meaning that none of the elements are equal to each other. 

* Functions, that mentioned below, works like _sortVectorByID(std::vector<NotLearning>& newClass)_

   `sortVectorByAverage(std::vector<NotLearning>& newClass)`

   `sortVectorByName(std::vector<NotLearning>& newClass)`

   `sortVectorBySurname(std::vector<NotLearning>& newClass)`

   `sortVectorByCity(std::vector<NotLearning>& newClass)`

   `sortVectorByDay(std::vector<NotLearning>& newClass)`

   `sortVectorByMonth(std::vector<NotLearning>& newClass)`

   `sortVectorByYear(std::vector<NotLearning>& newClass)`


     

