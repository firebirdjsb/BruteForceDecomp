/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1AEB3523EB6889D15EEB90C8984F580ED319258E23B9791DD1C865DBD1D4E08
 * Entry: 0x00319687, Ghidra index: 12228, label: FUN_00319687
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00319687(void)

{
  int in_ECX;
  undefined4 uVar1;
  
  uVar1 = 0;
  *(undefined4 *)(in_ECX + 0x150) = 0;
  if ((*(ushort *)(in_ECX + 0x12) & 0x100) != 0) {
    FUN_00318da3(*(undefined4 *)(*(int *)(in_ECX + 0x88) + 0xc0));
  }
  if ((*(byte *)(in_ECX + 0x12) & 3) == 3) {
    uVar1 = 2;
    if ((*(ushort *)(in_ECX + 0x12) & 0x200) != 0) {
      uVar1 = 3;
    }
    uVar1 = DSOUND__CMcpxBuffer_Play(uVar1);
  }
  return uVar1;
}
