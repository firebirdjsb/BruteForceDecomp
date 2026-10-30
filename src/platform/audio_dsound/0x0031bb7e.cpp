/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FF20C92DE48611135C355D83AED350649FF762276FD1185463B810DDAD6F669
 * Entry: 0x0031bb7e, Ghidra index: 12310, label: FUN_0031bb7e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386ae4;
void FUN_0031bb7e(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00386ae4;
  FUN_0031c064();
  uVar1 = FUN_00316bf2(param_1);
  in_ECX[1] = uVar1;
  return;
}
