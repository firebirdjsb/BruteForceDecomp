/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72D8BD3D10924B037B9AD297D22499CB1778EB139D1B44E8E12DC3B73A534472
 * Entry: 0x00272340, Ghidra index: 8833, label: FUN_00272340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox register/stack ABI_UNVERIFIED. */
extern void FUN_002723c0(void);
void FUN_00272340(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *in_ECX;
  
  *(undefined4 *)(in_EAX + 0xdc) = *in_ECX;
  *(undefined4 *)(in_EAX + 0xe0) = in_ECX[1];
  *(undefined4 *)(in_EAX + 0xe4) = in_ECX[2];
  *(undefined4 *)(in_EAX + 0xf8) = in_ECX[7];
  uVar1 = in_ECX[5];
  uVar2 = in_ECX[4];
  *(undefined4 *)(in_EAX + 0xe8) = in_ECX[3];
  *(undefined4 *)(in_EAX + 0xec) = uVar2;
  *(undefined4 *)(in_EAX + 0xf0) = uVar1;
  *(undefined4 *)(in_EAX + 0x100) = in_ECX[9];
  *(undefined4 *)(in_EAX + 0xfc) = in_ECX[8];
  *(undefined4 *)(in_EAX + 0xf4) = in_ECX[6];
  FUN_002723c0();
  return;
}
