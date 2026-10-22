/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7AABF54DD327FFF2C850B5841337C7B10051F8BFA167238A34A7AC840BB3131D
 * Entry: 0x003170be, Ghidra index: 12169, label: FUN_003170be
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003170be(void)

{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = FUN_003166d3(3);
  if (iVar3 == 0) {
    if ((*(byte *)(in_ECX + 0x12) & 3) == 3) {
      bVar2 = FUN_00316fda();
      if (((bVar2 & 3) == 1) && (*(int *)(in_ECX + 0x19c) == 0)) {
        if ((*(ushort *)(in_ECX + 0x12) & 0x2800) == 0) {
          if ((*(ushort *)(in_ECX + 0x12) & 0x400) == 0) {
            FUN_00317e87(0x400);
          }
        }
        else {
          FUN_003168b6();
        }
      }
    }
  }
  else {
    *(undefined1 *)(*(int *)(in_ECX + 0x68) + 0x3f) = 0x80;
    puVar1 = (ushort *)(in_ECX + 0x12);
    if ((*puVar1 & 0x1000) != 0) {
      *puVar1 = *puVar1 & 0xefff;
      *puVar1 = *puVar1 | 0x2000;
    }
    DSOUND__CMcpxStream_Flush(1);
  }
  return 1;
}
