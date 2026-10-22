/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98A6EE0D14D59F9432B1704B2D5EC364EBC8934ED114A61B7C3E99D6F0A36F5C
 * Entry: 0x000c6440, Ghidra index: 2438, label: FUN_000c6440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f3cc;
undefined4 * FUN_000c6440(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_4;
  
  FUN_000bbcb0();
  *param_1 = &PTR_FUN_0039f3cc;
  param_1[0xe] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0x40;
  *(undefined2 *)(param_1 + 3) = 0x40;
  *(undefined1 *)(param_1 + 0xb) = 100;
  *(undefined1 *)((int)param_1 + 0x2d) = 200;
  *(undefined1 *)((int)param_1 + 0x2e) = 100;
  *(undefined1 *)(param_1 + 4) = 0xff;
  param_1[0xc] = 0;
  local_4 = 0xeb65aa86;
  piVar2 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)param_1[0xe];
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xe] = 0;
    }
    param_1[0xe] = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  return param_1;
}
