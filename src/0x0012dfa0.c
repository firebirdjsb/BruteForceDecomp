/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8FD0AF1BE959A7D507AD3320C164392156D1EA0437F3CB734C2B491EE207402
 * Entry: 0x0012dfa0, Ghidra index: 3809, label: FUN_0012dfa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699d0;
extern uint32_t DAT_004699d4;
extern uint32_t DAT_004699dc;
extern uint32_t *DAT_00469b54;
extern uint32_t PTR_FUN_0039db9c;
extern uint32_t PTR_LAB_0039db70;
extern uint32_t PTR_LAB_0039db98;
void FUN_0012dfa0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined1 local_1;
  
  FUN_001548f0();
  *in_ECX = &PTR_FUN_0039db9c;
  in_ECX[6] = &PTR_LAB_0039db98;
  in_ECX[0x55] = 0;
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  in_ECX[0x56] = 0;
  in_ECX[0x5a] = 0;
  in_ECX[0x5b] = 0;
  in_ECX[0x5c] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x5f] = 0;
  in_ECX[0x60] = 0;
  in_ECX[0x62] = 0;
  in_ECX[99] = 0;
  in_ECX[100] = 0;
  in_ECX[0x66] = 0;
  in_ECX[0x67] = 0;
  in_ECX[0x68] = 0;
  in_ECX[0x69] = 0;
  in_ECX[0x6e] = 0;
  in_ECX[0x6f] = 0;
  in_ECX[0x70] = 0;
  in_ECX[0x72] = 0;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x7b] = 0;
  in_ECX[0x7c] = 0;
  in_ECX[0x7d] = &PTR_LAB_0039db70;
  *(undefined1 *)(in_ECX + 0x7e) = local_1;
  iVar1 = FUN_0025ae60(in_ECX + 0x7e);
  in_ECX[0x7f] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(in_ECX[0x7f] + 4) = in_ECX[0x7f];
  *(undefined4 *)in_ECX[0x7f] = in_ECX[0x7f];
  *(undefined4 *)(in_ECX[0x7f] + 8) = in_ECX[0x7f];
  in_ECX[0x80] = 0;
  in_ECX[0x81] = 0;
  in_ECX[0x82] = 0;
  in_ECX[0x97] = 0;
  in_ECX[0x98] = 0;
  in_ECX[0x99] = 0;
  in_ECX[0x9a] = 0;
  in_ECX[0x9b] = 0;
  in_ECX[0x9c] = 0;
  in_ECX[0x9d] = 0;
  in_ECX[0x9e] = 0;
  in_ECX[0xa0] = 0;
  in_ECX[0xa1] = 0;
  in_ECX[0xa2] = 0;
  in_ECX[0xa3] = 0;
  in_ECX[0xa4] = 0;
  func_0x0012ded0();
  in_ECX[0xca] = 0;
  in_ECX[0xcb] = 0;
  in_ECX[0xcc] = 0;
  in_ECX[0xcd] = 0;
  in_ECX[0xce] = 0;
  in_ECX[0xcf] = 0;
  in_ECX[0xd0] = 0;
  in_ECX[0xd1] = 0;
  in_ECX[0xd2] = 0;
  in_ECX[0xd4] = 0;
  in_ECX[0xd5] = 0;
  in_ECX[0xd6] = 0;
  in_ECX[0xd7] = 0;
  in_ECX[0xd8] = 0;
  in_ECX[0xd9] = 0;
  in_ECX[0xda] = 0;
  in_ECX[0xdb] = 0;
  func_0x0012de50(in_ECX + 0xfa);
  in_ECX[0x19e] = 0;
  in_ECX[0x19f] = 0;
  in_ECX[0x1a0] = 0;
  in_ECX[0x1a1] = 0;
  *(byte *)(in_ECX + 0xaa) = *(byte *)(in_ECX + 0xaa) & 0xfe | 2;
  in_ECX[0x91] = 0x3dcccccd;
  in_ECX[0x94] = 0x3dcccccd;
  iVar1 = DAT_004699dc;
  in_ECX[1] = 3;
  in_ECX[0x87] = 0x3f000000;
  in_ECX[0x85] = 0;
  in_ECX[0x86] = 0;
  in_ECX[0xac] = 0;
  in_ECX[0xad] = 0;
  in_ECX[0xae] = 0;
  in_ECX[0xb1] = 0;
  in_ECX[0xb0] = 0;
  in_ECX[0xaf] = 0;
  in_ECX[0x92] = 0x3f19999a;
  in_ECX[0x93] = 0x3d75c28f;
  in_ECX[0x95] = 0x3e051eb8;
  in_ECX[0x96] = 0x41000000;
  in_ECX[0xb3] = 0;
  in_ECX[0xb2] = 0;
  in_ECX[0x6b] = 0;
  in_ECX[0x58] = 1;
  in_ECX[0x57] = 0;
  in_ECX[0x8b] = 0x40400000;
  in_ECX[0x8a] = 0x3fc00000;
  in_ECX[0xa5] = 0;
  *(undefined1 *)(in_ECX + 0xa6) = 0;
  *(ushort *)(in_ECX + 0x6a) = *(ushort *)(in_ECX + 0x6a) & 0x4001;
  in_ECX[200] = 0;
  in_ECX[0xc9] = 0;
  in_ECX[0x89] = 0x42c80000;
  in_ECX[0xa8] = 0x42480000;
  in_ECX[0xa9] = 0;
  in_ECX[0x88] = 0x3f800000;
  in_ECX[0xab] = 0;
  in_ECX[0x90] = 0xffffffff;
  in_ECX[0xce] = 0;
  in_ECX[0xcf] = 0;
  *(byte *)((int)in_ECX + 0x1aa) = *(byte *)((int)in_ECX + 0x1aa) & 0xfe;
  *(byte *)((int)in_ECX + 0x1a9) = *(byte *)((int)in_ECX + 0x1a9) & 0xbf;
  in_ECX[0x1c2] = 0;
  in_ECX[0x1c3] = 0;
  in_ECX[0x83] = 0;
  in_ECX[0x84] = 0;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*DAT_00469b54 + 0x48))();
    DAT_004699d0 = *(undefined4 *)(iVar1 + 0x4e4);
    DAT_004699d4 = *(undefined4 *)(iVar1 + 0x4e8);
    uRam004699d8 = 2;
  }
  DAT_004699dc = DAT_004699dc + 1;
  return;
}
