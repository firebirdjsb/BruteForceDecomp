/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C599751FD4FE228C9307928635470AFBF6A20757881FE6B2A66F6E882C0AFD2E
 * Entry: 0x003523bb, Ghidra index: 13067, label: FUN_003523bb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003523bb(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x8c0) == '\x16') {
    iVar3 = (uint)*(byte *)(in_ECX + 0x2b) * 5;
    uVar2 = *(uint *)(in_ECX + 0x1d8);
    if ((uint)(*(int *)(in_ECX + 0xa58) + iVar3) < uVar2) {
      if ((uint)*(byte *)(in_ECX + 0x2c) * 0x32 + *(int *)(in_ECX + 0xa58) < uVar2) {
        FUN_00351884(0);
      }
      else if ((uint)(*(int *)(in_ECX + 0xa5c) + iVar3) < uVar2) {
        cVar1 = *(char *)(in_ECX + 0xa33);
        *(char *)(in_ECX + 0xa33) = cVar1 + '\x01';
        FUN_00350a7a(0x21c0,9,CONCAT31((int3)((uint)iVar3 >> 8),cVar1),in_ECX + 0xa3c,4,0,0,0,0,0,0,
                     0,0,0);
        *(uint *)(in_ECX + 0xa5c) = uVar2;
      }
    }
  }
  return;
}
