/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB0AF9D52634AA770E7C2E2B998987DD8F5CEE09F027DC5DEE51F15616B3CDD2
 * Entry: 0x003854d9, Ghidra index: 13671, label: FUN_003854d9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fc8;
bool FUN_003854d9(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int in_ECX;
  uint in_EDX;
  int local_8;
  
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x434);
  do {
    if (iVar1 == 0) {
      *(int *)(in_ECX + 0x434) = local_8;
      return local_8 != 0;
    }
    iVar1 = *(int *)(in_ECX + 0x434);
    *(undefined4 *)(in_ECX + 0x434) = *(undefined4 *)(iVar1 + 0x14);
    puVar2 = *(uint **)(iVar1 + 0x10);
    if (in_EDX < puVar2[7]) {
LAB_00385512:
      *(int *)(iVar1 + 0x14) = local_8;
      local_8 = iVar1;
    }
    else {
      if (((byte)puVar2[4] & 0x40) != 0) {
        *(byte *)(puVar2 + 4) = (byte)puVar2[4] & 0xbf;
        goto LAB_00385512;
      }
      if (*(char *)(iVar1 + 1) == 'J') {
        FUN_003858cc();
      }
      else {
        FUN_003853fc();
        puVar3 = *(uint **)(iVar1 + 0x18);
        if (puVar3 != (uint *)0x0) {
          uVar4 = 1 << ((byte)(*puVar2 >> 7) & 0xf);
          if ((*puVar2 & 0x1800) == 0x1000) {
            uVar4 = uVar4 << 0x10;
          }
          if ((puVar2[2] & 2) == 0) {
            *puVar3 = *puVar3 & ~uVar4;
          }
          else {
            *puVar3 = *puVar3 | uVar4;
          }
        }
        puVar2[6] = (uint)DAT_004a8fc8;
        DAT_004a8fc8 = puVar2;
        *(undefined4 *)(iVar1 + 4) = 0;
        FUN_00380eda(iVar1);
      }
    }
    iVar1 = *(int *)(in_ECX + 0x434);
  } while( true );
}
