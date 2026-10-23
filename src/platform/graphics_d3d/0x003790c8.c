/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE9DC97ABDF68C3DE9F0009350DE8CB5BBDD46485CA01CEC655203BCCCB51570
 * Entry: 0x003790c8, Ghidra index: 13479, label: FUN_003790c8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003790c8(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  in_ECX[0x48] = 0xff;
  in_ECX[0x49] = 0x800000;
  in_ECX[0x47] = 0x1111111;
  *(undefined4 *)(iVar1 + 0x3210) = 0;
  *(undefined4 *)(iVar1 + 0x3270) = 0;
  *(undefined4 *)(iVar1 + 0x3240) = 0;
  *(undefined4 *)(iVar1 + 0x3244) = 0;
  *(undefined4 *)(iVar1 + 0x3058) = 0;
  *(undefined4 *)(iVar1 + 0x3258) = 0;
  *(int *)(iVar1 + 0x2504) = in_ECX[0x41];
  *(undefined4 *)(iVar1 + 0x2508) = 0;
  *(undefined4 *)(iVar1 + 0x250c) = 0;
  *(undefined4 *)(iVar1 + 0x3228) = 0;
  *(undefined4 *)(iVar1 + 0x2410) = 0;
  *(undefined4 *)(iVar1 + 0x2420) = 0;
  return;
}
