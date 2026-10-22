/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D81A6AA27B15CB55E8337637C29D8604D84EF34ED0DC023026E8409DEB692E7
 * Entry: 0x00236a00, Ghidra index: 7835, label: FUN_00236a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00236a00(undefined4 param_1)

{
  undefined4 in_EDX;
  int *unaff_ESI;
  undefined1 local_24 [24];
  undefined1 local_c [12];
  
  FUN_00236670(in_EDX,&param_1,local_24);
  FUN_000621c0();
  FUN_000621c0();
  (**(code **)(*unaff_ESI + 0x50))(local_c,param_1);
  return;
}
