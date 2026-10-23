/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08D2CC5256CD581BE8FFA89CEC01B4C39BE7F3CDD29052BB4827CB1C2FCC4815
 * Entry: 0x0001fd10, Ghidra index: 159, label: FUN_0001fd10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001fd10(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[6];
  uVar2 = in_ECX[3];
  *in_EAX = *in_ECX;
  in_EAX[1] = uVar2;
  in_EAX[2] = uVar1;
  return;
}
