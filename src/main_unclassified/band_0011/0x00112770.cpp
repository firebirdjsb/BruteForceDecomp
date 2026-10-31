/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBB068E35F94459A5D56F769BA9A28F98F1C581A7D61CC0420FAE89F605645BD
 * Entry: 0x00112770, Ghidra index: 3557, label: FUN_00112770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* C++17 source-matched declaration only: FUN_0005c0a0.cpp draft is uint(void).
 * Original Xbox register/stack inputs and runtime ABI remain ABI_UNVERIFIED. */
extern uint FUN_0005c0a0(void);
uint FUN_00112770(void)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int *)(in_EAX + 0x59c) == 0) {
    return in_EAX & 0xffffff00;
  }
  uVar1 = FUN_0005c0a0();
  return uVar1;
}
