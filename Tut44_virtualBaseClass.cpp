// Intro to virtual base class.

// Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances”
// of a given class appearing in an inheritance hierarchy when using multiple inheritances. 

/*
virtual can be written before or after the public. Now only one copy of data/function member will be
copied to class C and class B and class A becomes the virtual base class. Virtual base classes offer 
a way to save space and avoid ambiguities in class hierarchies that use multiple inheritances. When a 
base class is specified as a virtual base, it can act as an indirect base more than once without 
duplication of its data members. A single copy of its data members is shared by all the base classes 
that use virtual base. */






