/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95B45F95BC574E3B2DD07FC2716EF42B11BC5BE13891455CF7B4616062707A6F
 * Entry: 0x000fd0d0, Ghidra index: 3161, label: FUN_000fd0d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfdc;
bool FUN_000fd0d0(void)

{
  byte bVar1;
  int *piVar2;
  int *in_EAX;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  piVar2 = (int *)*in_EAX;
  iVar6 = 0;
  if (piVar2 == (int *)0x0) {
    return false;
  }
  iVar3 = FUN_002ea01d(0x84);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00102420();
  }
  piVar4[9] = *piVar2;
  (**(code **)(*piVar4 + 0x2c))();
  if (piVar2[5] == 0x1a6fe169) {
    DAT_0046cfdc = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
    FUN_001025b0(piVar4);
  }
  else {
    uVar5 = 0;
    while ((piVar2[2] != 0 && (uVar5 < (uint)((piVar2[3] - piVar2[2]) / 0x1c)))) {
      if (*(uint *)(piVar2[2] + 0x18 + iVar6) < 0x10) {
        FUN_001025b0(piVar4);
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 0x1c;
      }
      else {
        FUN_001025b0(piVar4);
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 0x1c;
      }
    }
  }
  bVar1 = *(byte *)(piVar2 + 6);
  *(byte *)(piVar4 + 0x20) = *(byte *)(piVar4 + 0x20) & 0xfe | bVar1 & 1;
  *(byte *)(piVar4 + 0x1f) = *(byte *)(piVar4 + 0x1f) & 0xfe | bVar1 & 1;
  *(byte *)(piVar4 + 0x20) =
       *(byte *)(piVar4 + 0x20) ^
       (*(char *)((int)piVar2 + 0x19) << 1 ^ *(byte *)(piVar4 + 0x20)) & 2;
  iVar6 = FUN_000ff9e0(piVar4);
  return iVar6 != -1;
}
