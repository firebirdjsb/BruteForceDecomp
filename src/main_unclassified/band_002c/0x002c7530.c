/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99F1C2964A9D632F3A2803C729CEBC7F5355DDED12DB6F1D8882366CFB083190
 * Entry: 0x002c7530, Ghidra index: 10099, label: FUN_002c7530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002c7530(void)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (*(short *)(in_ECX + 0x12) != 0) {
    do {
      (**(code **)**(undefined4 **)(*(int *)(in_ECX + 0x14) + iVar1 * 4))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)(in_ECX + 0x12));
  }
  if (*(short *)(in_ECX + 0x18) != 0) {
    if (*(int *)(in_ECX + 0x14) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(in_ECX + 0x14));
      return;
    }
    *(undefined2 *)(in_ECX + 0x10) = 0;
    *(undefined2 *)(in_ECX + 0x18) = 0;
  }
  *(undefined2 *)(in_ECX + 0x12) = 0;
  iVar1 = 0;
  if (*(short *)(in_ECX + 0x1e) != 0) {
    do {
      (**(code **)**(undefined4 **)(*(int *)(in_ECX + 0x20) + iVar1 * 4))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)(in_ECX + 0x1e));
  }
  if (*(short *)(in_ECX + 0x24) != 0) {
    if (*(int *)(in_ECX + 0x20) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(in_ECX + 0x20));
      return;
    }
    *(undefined2 *)(in_ECX + 0x1c) = 0;
    *(undefined2 *)(in_ECX + 0x24) = 0;
  }
  *(undefined2 *)(in_ECX + 0x1e) = 0;
  return;
}
