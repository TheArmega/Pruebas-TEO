# Service used to set the control mode for a set of joints
# names: it can contain the names of the joints for which the control mode has to be set. If left empty, a control mode for all the available joints has to be specified
# modes: it contains the new control modes to set for the joints specified in "names". If "names" is empty, a control mode value for all the available joints has to be specified
string[] names
string[] modes
