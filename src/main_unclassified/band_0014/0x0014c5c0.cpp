/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 932D74EA57D297EA5BD5AA1546DEEF924095CD9A958B80A9ED009715884022A1
 * Entry: 0x0014c5c0, Ghidra index: 4340, label: FUN_0014c5c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039b138;
extern uint32_t PTR_FUN_0039b1b0;
extern uint32_t PTR_FUN_0039b318;
extern uint32_t PTR_FUN_0039b470;
extern uint32_t PTR_FUN_0039cfe0;
void FUN_0014c5c0(void)

{
  undefined4 *unaff_EBX;
  
  FUN_0014ac90();
  *unaff_EBX = &PTR_FUN_0039b318;
  unaff_EBX[0xd] = 0x1010101;
  unaff_EBX[0xe] = 0x1010101;
  *(undefined1 *)(unaff_EBX + 0xf) = 1;
  unaff_EBX[0x10] = 0;
  unaff_EBX[5] = 1;
  FUN_0014ac90();
  unaff_EBX[0x11] = &PTR_FUN_0039b318;
  unaff_EBX[0x1e] = 0x1010101;
  unaff_EBX[0x1f] = 0x1010101;
  *(undefined1 *)(unaff_EBX + 0x20) = 1;
  unaff_EBX[0x21] = 0;
  unaff_EBX[0x16] = 1;
  FUN_0014ac90();
  unaff_EBX[0x27] = 2;
  unaff_EBX[0x22] = &PTR_FUN_0039b1b0;
  FUN_0014ac90();
  unaff_EBX[0x2f] = &PTR_FUN_0039b470;
  unaff_EBX[0x34] = 2;
  FUN_0014b540();
  FUN_0014ac90();
  unaff_EBX[0x44] = &PTR_FUN_0039cfe0;
  FUN_0014ac90();
  unaff_EBX[0x51] = &PTR_FUN_0039b138;
  FUN_0014ac90();
  unaff_EBX[0x5e] = &PTR_FUN_0039b138;
  unaff_EBX[0x6d] = 0;
  unaff_EBX[0x6f] = 0xffffffff;
  unaff_EBX[0x6e] = 10;
  unaff_EBX[0x71] = 0xffffffff;
  unaff_EBX[0x70] = 10;
  unaff_EBX[1] = 0xff4c691b;
  unaff_EBX[2] = unaff_EBX;
  if (unaff_EBX[4] != 0) {
    FUN_0008f6a0(0);
  }
  unaff_EBX[5] = 1;
  unaff_EBX[0x10] = 0;
  unaff_EBX[0x12] = 0xf4ccf78c;
  unaff_EBX[0x13] = unaff_EBX;
  if (unaff_EBX[0x15] != 0) {
    FUN_0008f6a0(0);
  }
  unaff_EBX[0x16] = 1;
  unaff_EBX[0x21] = 1;
  unaff_EBX[0x23] = 0x8d7f793;
  unaff_EBX[0x24] = unaff_EBX;
  if (unaff_EBX[0x26] != 0) {
    FUN_0008f6a0(0);
  }
  unaff_EBX[0x27] = 2;
  unaff_EBX[0x30] = 0x8d7f793;
  unaff_EBX[0x31] = unaff_EBX;
  if (unaff_EBX[0x33] != 0) {
    FUN_0008f6a0(0);
  }
  unaff_EBX[0x34] = 2;
  unaff_EBX[0x45] = 0xf8474385;
  unaff_EBX[0x46] = unaff_EBX;
  if (unaff_EBX[0x48] != 0) {
    FUN_0008f6a0(0);
  }
  unaff_EBX[0x52] = 0x1d4b6d69;
  unaff_EBX[0x53] = unaff_EBX;
  if (unaff_EBX[0x55] != 0) {
    FUN_0008f6a0(0);
  }
  unaff_EBX[0x5f] = 0x15ab6d29;
  unaff_EBX[0x60] = unaff_EBX;
  if (unaff_EBX[0x62] != 0) {
    FUN_0008f6a0(0);
  }
  unaff_EBX[0x3d] = 0x1e174640;
  unaff_EBX[0x3e] = unaff_EBX;
  if (unaff_EBX[0x40] != 0) {
    FUN_0008f6a0(0);
  }
  unaff_EBX[0x6b] = 0;
  unaff_EBX[0x75] = 0;
  unaff_EBX[0x73] = 0;
  unaff_EBX[0x74] = 0;
  unaff_EBX[0x6f] = 0xffffffff;
  unaff_EBX[0x6e] = 10;
  unaff_EBX[0x71] = 0xffffffff;
  unaff_EBX[0x70] = 10;
  unaff_EBX[0x76] = 0;
  *(byte *)(unaff_EBX + 0x72) = *(byte *)(unaff_EBX + 0x72) & 0xfc | 4;
  if (unaff_EBX[0x6d] != 0) {
    FUN_0008f6a0(0);
  }
  FUN_0014cb60(0);
  return;
}
