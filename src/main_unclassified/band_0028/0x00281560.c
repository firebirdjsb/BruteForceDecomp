/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36AA068D2CE71E00081182636666233F70F608C727075F40D6C52297B6023A39
 * Entry: 0x00281560, Ghidra index: 9043, label: FUN_00281560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00281560(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(iVar1 + *(int *)(in_ECX + 0x2824)) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x2824) + 8 + iVar1) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x2824) + 4 + iVar1) = 0;
    iVar1 = iVar1 + 0xc;
  } while (iVar1 < 0x180c);
  *(int *)(*(int *)(in_ECX + 0x2824) + 0x1808) = in_EAX;
  iVar1 = in_EAX * 0xc;
  *(undefined4 *)(iVar1 + *(int *)(in_ECX + 0x2824)) = 0x200;
  *(undefined4 *)(*(int *)(in_ECX + 0x2824) + 8 + iVar1) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x2824) + 4 + iVar1) = 0;
  return;
}
