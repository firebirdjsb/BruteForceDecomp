/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ABE8E0FCC165DA56BC541A61D68936B0FA7FA43E6BB5DE8FBB72469A37342AFF
 * Entry: 0x002bd190, Ghidra index: 9940, label: FUN_002bd190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e774;
extern uint32_t PTR_FUN_0038e820;
extern uint32_t PTR_FUN_003bc654;
void FUN_002bd190(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0038e774;
  if (*(short *)(in_ECX + 0x11) != 0) {
    if (in_ECX[0x10] != 0) {
      (*(code *)PTR_FUN_003bc654)(in_ECX[0x10]);
      return;
    }
    *(undefined2 *)(in_ECX + 0xf) = 0;
    *(undefined2 *)(in_ECX + 0x11) = 0;
  }
  *(undefined2 *)((int)in_ECX + 0x3e) = 0;
  if (*(short *)(in_ECX + 0xe) != 0) {
    if (in_ECX[0xd] != 0) {
      (*(code *)PTR_FUN_003bc654)(in_ECX[0xd]);
      return;
    }
    *(undefined2 *)(in_ECX + 0xc) = 0;
    *(undefined2 *)(in_ECX + 0xe) = 0;
  }
  *(undefined2 *)((int)in_ECX + 0x32) = 0;
  if (*(short *)(in_ECX + 0xb) != 0) {
    if (in_ECX[10] != 0) {
      (*(code *)PTR_FUN_003bc654)(in_ECX[10]);
      return;
    }
    *(undefined2 *)(in_ECX + 9) = 0;
    *(undefined2 *)(in_ECX + 0xb) = 0;
  }
  *(undefined2 *)((int)in_ECX + 0x26) = 0;
  in_ECX[4] = &PTR_FUN_0038e820;
  in_ECX[2] = &PTR_FUN_0038e820;
  *in_ECX = &PTR_FUN_0038e820;
  return;
}
