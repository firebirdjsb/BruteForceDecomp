/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A799F759D4D08B2F3A7308BFD6919123511253511BDC429B05DB566CB817C33
 * Entry: 0x0006f0a0, Ghidra index: 1259, label: FUN_0006f0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0006bb60(int *param_1,undefined4 param_2);
extern void FUN_00073660(undefined4 param_1);

extern uint32_t PTR_LAB_003a2640;
extern uint32_t PTR_LAB_003a2810;
void FUN_0006f0a0(void)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 *unaff_ESI;
  
  FUN_0006bb60(in_ECX,in_EAX);
  *unaff_ESI = &PTR_LAB_003a2640;
  unaff_ESI[0x12] = &PTR_LAB_003a2810;
  unaff_ESI[0x52] = 0;
  FUN_00073660(0x3e800000);
  unaff_ESI[99] = 0x3f000000;
  *(undefined1 *)(unaff_ESI + 0x5e) = 0;
  unaff_ESI[0x61] = 0;
  unaff_ESI[0x62] = 0;
  unaff_ESI[0x5d] = 0x3e800000;
  unaff_ESI[0x60] = 0xc61c4000;
  unaff_ESI[0x5f] = 0xc61c4000;
  unaff_ESI[0x67] = 0;
  unaff_ESI[0x69] = 0x3f800000;
  unaff_ESI[0x68] = 0;
  unaff_ESI[0x66] = 0x3fc66666;
  unaff_ESI[100] = 0x47c35000;
  unaff_ESI[0x7c] = 0;
  unaff_ESI[0x7f] = 0;
  unaff_ESI[0x65] = 0;
  unaff_ESI[0x7e] = 0;
  unaff_ESI[0x82] = 0;
  unaff_ESI[0x83] = 0;
  *(byte *)(unaff_ESI + 0x7d) = *(byte *)(unaff_ESI + 0x7d) & 0xfe;
  unaff_ESI[0x80] = 0;
  unaff_ESI[0x81] = unaff_ESI;
  unaff_ESI[0x71] = 0;
  unaff_ESI[0x70] = 0;
  unaff_ESI[0x6f] = 0;
  unaff_ESI[0x6d] = 0;
  unaff_ESI[0x6c] = 0;
  unaff_ESI[0x6b] = 0;
  unaff_ESI[0x72] = 0x3f800000;
  unaff_ESI[0x6e] = 0x3f800000;
  unaff_ESI[0x6a] = 0x3f800000;
  unaff_ESI[0x7a] = 0;
  unaff_ESI[0x79] = 0;
  unaff_ESI[0x78] = 0;
  unaff_ESI[0x76] = 0;
  unaff_ESI[0x75] = 0;
  unaff_ESI[0x74] = 0;
  unaff_ESI[0x7b] = 0x3f800000;
  unaff_ESI[0x77] = 0x3f800000;
  unaff_ESI[0x73] = 0x3f800000;
  unaff_ESI[0x15] = 1;
  *(byte *)(unaff_ESI + 0x7d) = *(byte *)(unaff_ESI + 0x7d) | 2;
  unaff_ESI[0x86] = 0;
  unaff_ESI[0x85] = 0;
  unaff_ESI[0x84] = 0;
  unaff_ESI[0x89] = 0;
  unaff_ESI[0x88] = 0;
  unaff_ESI[0x87] = 0;
  unaff_ESI[0x91] = 0;
  unaff_ESI[0x90] = 0;
  unaff_ESI[0x8f] = 0;
  unaff_ESI[0x8d] = 0;
  unaff_ESI[0x8c] = 0;
  unaff_ESI[0x8b] = 0;
  unaff_ESI[0x92] = 0x3f800000;
  unaff_ESI[0x8e] = 0x3f800000;
  unaff_ESI[0x8a] = 0x3f800000;
  unaff_ESI[0x93] = 0;
  *(byte *)(unaff_ESI + 0x94) = *(byte *)(unaff_ESI + 0x94) & 0xfe | 2;
  return;
}
