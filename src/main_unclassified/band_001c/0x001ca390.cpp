/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDEC35C00E1BCD66FBAC1C66FB9D1B8F1699EEB66284433297FEABF09D93E811
 * Entry: 0x001ca390, Ghidra index: 5842, label: FUN_001ca390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox guest call ABI remains ABI_UNVERIFIED. */
extern void FUN_001ca540(int param_1);
void FUN_001ca390(void)

{
  int in_EAX;
  int in_ECX;
  
  FUN_001ca540(in_EAX);
  *(undefined4 *)(in_ECX + 0x344) = *(undefined4 *)(in_EAX + 0x344);
  *(undefined4 *)(in_ECX + 0x348) = *(undefined4 *)(in_EAX + 0x348);
  *(undefined4 *)(in_ECX + 0x34c) = *(undefined4 *)(in_EAX + 0x34c);
  *(undefined4 *)(in_ECX + 0x350) = *(undefined4 *)(in_EAX + 0x350);
  *(undefined4 *)(in_ECX + 0x354) = *(undefined4 *)(in_EAX + 0x354);
  *(undefined4 *)(in_ECX + 0x358) = *(undefined4 *)(in_EAX + 0x358);
  *(undefined4 *)(in_ECX + 0x35c) = *(undefined4 *)(in_EAX + 0x35c);
  *(undefined4 *)(in_ECX + 0x360) = *(undefined4 *)(in_EAX + 0x360);
  *(undefined4 *)(in_ECX + 0x364) = *(undefined4 *)(in_EAX + 0x364);
  return;
}
