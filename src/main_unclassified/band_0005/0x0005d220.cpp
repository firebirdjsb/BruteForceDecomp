/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04B2485A21FD43951AF293FE0AE0723244E66A90244DB7C508AE6B1E3EB5B03C
 * Entry: 0x0005d220, Ghidra index: 960, label: FUN_0005d220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
extern void FUN_0005b640(int param_1,undefined4 param_2);
extern void FUN_0005dc80(void);

int FUN_0005d220(undefined4 param_1)

{
  undefined4 *in_EAX;
  int iVar1;
  
  iVar1 = FUN_002ea01d(0x44);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0005b640(*in_EAX,param_1);
  }
  if (iVar1 != 0) {
    if ((uint)in_EAX[1] <= (uint)in_EAX[2]) {
      FUN_0005dc80();
    }
    *(int *)(in_EAX[3] + in_EAX[2] * 4) = iVar1;
    in_EAX[2] = in_EAX[2] + 1;
  }
  return iVar1;
}
