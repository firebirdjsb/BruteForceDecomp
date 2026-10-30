/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0C81D5AC8E6D1252448AC3387C0A460D6134DC8339768CC7D1C8E24A50A47B8
 * Entry: 0x0025e580, Ghidra index: 8593, label: FUN_0025e580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025e580(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  *in_EAX = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  *in_EAX = *param_1;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  uVar1 = in_EAX[4];
  in_EAX[4] = *(undefined4 *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 4) = uVar1;
  uVar1 = in_EAX[5];
  in_EAX[5] = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 8) = uVar1;
  uVar1 = in_EAX[6];
  in_EAX[6] = *(undefined4 *)(in_ECX + 0xc);
  *(undefined4 *)(in_ECX + 0xc) = uVar1;
  return;
}
