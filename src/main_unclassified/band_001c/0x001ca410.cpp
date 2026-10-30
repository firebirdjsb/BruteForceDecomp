/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70C4E773DA056CDF89B7BBE92EA37068500377D3BD1AF71D9C180D400E7C70D6
 * Entry: 0x001ca410, Ghidra index: 5843, label: FUN_001ca410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ca410(void)

{
  int in_EAX;
  int unaff_ESI;
  
  FUN_001ca050();
  *(undefined1 *)(in_EAX + 0x128) = *(undefined1 *)(unaff_ESI + 0x128);
  *(undefined4 *)(in_EAX + 300) = *(undefined4 *)(unaff_ESI + 300);
  *(undefined4 *)(in_EAX + 0x130) = *(undefined4 *)(unaff_ESI + 0x130);
  *(undefined4 *)(in_EAX + 0x134) = *(undefined4 *)(unaff_ESI + 0x134);
  *(undefined4 *)(in_EAX + 0x138) = *(undefined4 *)(unaff_ESI + 0x138);
  *(undefined4 *)(in_EAX + 0x13c) = *(undefined4 *)(unaff_ESI + 0x13c);
  FUN_001e0dd0(in_EAX + 0x140);
  FUN_001e0dd0(in_EAX + 0x150);
  FUN_001e0dd0(in_EAX + 0x160);
  FUN_001e0dd0(in_EAX + 0x170);
  *(undefined4 *)(in_EAX + 0x180) = *(undefined4 *)(unaff_ESI + 0x180);
  *(undefined4 *)(in_EAX + 0x184) = *(undefined4 *)(unaff_ESI + 0x184);
  *(undefined4 *)(in_EAX + 0x188) = *(undefined4 *)(unaff_ESI + 0x188);
  *(undefined4 *)(in_EAX + 0x18c) = *(undefined4 *)(unaff_ESI + 0x18c);
  *(undefined4 *)(in_EAX + 400) = *(undefined4 *)(unaff_ESI + 400);
  *(undefined4 *)(in_EAX + 0x194) = *(undefined4 *)(unaff_ESI + 0x194);
  *(undefined4 *)(in_EAX + 0x198) = *(undefined4 *)(unaff_ESI + 0x198);
  *(undefined4 *)(in_EAX + 0x19c) = *(undefined4 *)(unaff_ESI + 0x19c);
  *(undefined4 *)(in_EAX + 0x1a0) = *(undefined4 *)(unaff_ESI + 0x1a0);
  *(undefined4 *)(in_EAX + 0x1a4) = *(undefined4 *)(unaff_ESI + 0x1a4);
  *(undefined4 *)(in_EAX + 0x1a8) = *(undefined4 *)(unaff_ESI + 0x1a8);
  return;
}
