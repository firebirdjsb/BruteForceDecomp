/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2511E5750BC0DC43CBAE5D77945AE556D0D0B49C91AB629435182427D5AB7F67
 * Entry: 0x001b5d60, Ghidra index: 5683, label: FUN_001b5d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b5d60(void)

{
  int in_EAX;
  int in_ECX;
  
  FUN_001b5df0();
  FUN_001b5ed0(in_EAX + 0x70);
  FUN_001bc380(in_ECX + 0x100);
  FUN_001bc850(in_ECX + 0x110);
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(in_EAX + 0x120);
  FUN_001e0dd0(in_ECX + 0x124);
  FUN_001e0dd0(in_ECX + 0x134);
  FUN_001e0dd0(in_ECX + 0x144);
  FUN_001e0dd0(in_ECX + 0x154);
  return;
}
