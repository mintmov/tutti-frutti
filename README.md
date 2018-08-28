School project.

Naming convention:

 .Structs / typedefs: TitleCase.
 Ex.: CharSetNode.

 .Struct functions: StructName + function_name_in_snakecase.
 Ex.: CharSet_make.

 .Struct functions that shouldn't be called directly (private):
 "pf_" + StructName + function_name_in_snake_case.
 Ex.: pf_CharSet_sort.

 .Local variables: lowercase.
 Ex. low, high, mid, var.

 .Global variables: "G_" + name in lowercase.

 .Macros: NAME_IN_ALL_CAPS.

 .Enums: ALL_CAPS or lowercase.
