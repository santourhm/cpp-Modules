

in C casting is pretty simple using _(new_type)(current_expression)_  its quite dangerous when we try for example from long long to an _uint8_t_ so it doesnt care , in C++ it's somohow safer using diffrent pre-defined behavior of casting. 
   
   __static_cast__

       this is a run time checked conversion it cast well defined types 
            - 
