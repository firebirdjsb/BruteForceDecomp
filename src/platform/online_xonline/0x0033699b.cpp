/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8A08116E700AF135B1C5D4B92E5A8345A86C39D4014F9742687FC15F233BBFC
 * Entry: 0x0033699b, Ghidra index: 12458, label: FUN_0033699b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; direct CALL targets checked against the pinned XBE.
 * ABI_UNVERIFIED: source signatures are not recovered Xbox/native interfaces.
 */
extern undefined4 FUN_0033621e(uint param_1);
void FUN_0033699b(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(short *)(param_1 + 0xc) != 0) {
    iVar1 = param_1 + 0x4c;
    do {
      *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) & 0xcb;
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x74;
    } while (uVar2 < *(ushort *)(param_1 + 0xc));
  }
  FUN_0033621e(param_1);
  return;
}
