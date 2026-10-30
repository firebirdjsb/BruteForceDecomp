/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2911F2688A3AE7893C0428AE759AFA907FB703769200900753AC3CA3B865D71E
 * Entry: 0x002d6260, Ghidra index: 10238, label: FUN_002d6260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e4f4;
extern uint32_t PTR_FUN_0038e4fc;
extern uint32_t PTR_FUN_0038e640;
extern uint32_t PTR_FUN_003bc654;
void FUN_002d6260(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = PTR_FUN_0038e4fc;
  in_EAX[0x20] = PTR_FUN_0038e4f4;
  FUN_002d6170();
  if (*(short *)(in_EAX + 0x24) != 0) {
    if (in_EAX[0x23] != 0) {
      (*(code *)PTR_FUN_003bc654)(in_EAX[0x23]);
      return;
    }
    *(undefined2 *)(in_EAX + 0x22) = 0;
    *(undefined2 *)(in_EAX + 0x24) = 0;
  }
  *(undefined2 *)((int)in_EAX + 0x8a) = 0;
  in_EAX[0x20] = &PTR_FUN_0038e640;
  FUN_002bf340();
  return;
}
