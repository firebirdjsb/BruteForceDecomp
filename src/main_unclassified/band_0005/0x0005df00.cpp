/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F75F49FAE25EC171703910BDB3F79BC9D6A81170B4473331C33C5554064C139B
 * Entry: 0x0005df00, Ghidra index: 978, label: FUN_0005df00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3f10;
void FUN_0005df00(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  in_EAX[0x43] = 0;
  in_EAX[0x44] = 0;
  in_EAX[0x41] = 0;
  in_EAX[0x45] = 0;
  in_EAX[0x46] = param_1;
  *(undefined1 *)(in_EAX + 0x42) = 1;
  *in_EAX = PTR_LAB_003a3f10;
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  in_EAX[0x47] = *in_ECX;
  in_EAX[0x48] = uVar2;
  in_EAX[0x49] = uVar1;
  in_EAX[0x4a] = param_2;
  return;
}
