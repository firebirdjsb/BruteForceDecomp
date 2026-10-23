/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0BFAA97B614DDEB46B1DEF1AF95069C6A8B308C3A0CED7F2194A4A512B22E107
 * Entry: 0x001e36f0, Ghidra index: 6771, label: FUN_001e36f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
uint FUN_001e36f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  char local_49;
  undefined4 *local_48;
  undefined4 local_44;
  undefined1 local_40 [4];
  uint local_3c;
  undefined4 local_2c;
  uint local_28;
  uint local_20;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  FUN_001e42f0(param_1);
  puVar3 = *(undefined4 **)(param_1 + 4);
  puVar2 = puVar3;
  if (puVar3 != *(undefined4 **)(param_1 + 8)) {
    do {
      local_48 = puVar2 + 0x10;
      puVar3 = (undefined4 *)FUN_001e3bc0(param_1,puVar2[0xf],&local_49);
      if ((char)puVar3 == '\0') {
        if (local_49 != '\0') {
          if ((uint)puVar2[7] < 8) {
            puVar2 = puVar2 + 2;
          }
          else {
            puVar2 = (undefined4 *)puVar2[2];
          }
          puVar3 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x270))(puVar2);
        }
      }
      else {
        local_44 = *puVar2;
        local_28 = 7;
        local_2c = 0;
        local_3c = local_3c & 0xffff0000;
        local_c = 0xf;
        local_10 = 0;
        local_20 = local_20 & 0xffffff00;
        FUN_00087940(local_40,0,0xffffffff);
        FUN_0001f4f0(puVar2 + 8,0,0xffffffff);
        local_8 = puVar2[0xf];
        iVar1 = *(int *)(param_1 + 0x14);
        local_4 = 0;
        iVar4 = FUN_001e45c0(param_1 + 0x10,iVar1,*(undefined4 *)(iVar1 + 4),&local_44);
        puVar3 = (undefined4 *)FUN_001e4640();
        *(int *)(iVar1 + 4) = iVar4;
        **(int **)(iVar4 + 4) = iVar4;
        if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(local_20);
        }
        local_c = 0xf;
        local_10 = 0;
        local_20 = local_20 & 0xffffff00;
        if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(local_3c);
        }
        local_28 = 7;
        local_2c = 0;
        local_3c = local_3c & 0xffff0000;
      }
      puVar2 = local_48;
    } while (local_48 != *(undefined4 **)(param_1 + 8));
  }
  return (uint)puVar3 & 0xffffff00;
}
