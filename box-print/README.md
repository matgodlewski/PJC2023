# Box print

### Displaying text in a frame

As a rule, the user prefers the data he needs to read to be nicely formatted. Imagine how difficult it would be to read these tasks if everything was written in black and white, without coloring the code syntax or emphasizing passages in bold or italics.

Sometimes we want the displayed lines to be framed to better isolate the text. Please note that the sample code under the task description is also framed (it can be seen more or less clearly - depending on the selected page theme).

Write a function that will display the given text strings in a frame consisting of the argument passed to the function. If the function is called without a second argument, the frame should consist of the asterisk character (*).

Call example:

    auto main() -> int {
        boxPrint({"a", "quick", "brown", "fox"});
        boxPrint({"a", "quick", "brown", "fox"}, '*');
        boxPrint({"a", "quick", "brown", "fox"}, '#');
        boxPrint(std::vector<std::string>{"a", "quick", "brown", "fox"}, '#');
        boxPrint({""});
        boxPrint({});
        boxPrint({}, '#');
        boxPrint({"", "hmmmm", ""});
        boxPrint({"", "", ""});
    }
#
    *******  
    *a    *
    *quick*  
    *brown*  
    *fox  *
    *******  

    *******  
    *a    *
    *quick*  
    *brown*  
    *fox  *
    *******  

    #######  
    #a    #  
    #quick#  
    #brown#  
    #fox  #  
    #######

    #######  
    #a    #  
    #quick#  
    #brown#  
    #fox  #  
    #######

    **  
    **  
    **

    **  
    **

    ##  
    ##  

    *******  
    *     *  
    *hmmmm*
    *     *  
    *******  

    **  
    **  
    **  
    **  
    **
