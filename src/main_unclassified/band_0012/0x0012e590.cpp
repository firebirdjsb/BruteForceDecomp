/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27B862FD95281CC6840420B445CEA4ED1119DB896A434ADF00EC2BFC64A0356A
 * Entry: 0x0012e590, Ghidra index: 3812, label: FUN_0012e590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D direct/indirect guest32 allocator boundary:
 * one source size DWORD and 32-bit EAX result. Guest-memory ABI unverified. */
#include "bf_002ea01d_allocator_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039d8f0;
undefined4 * FUN_0012e590(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  switch(*(undefined4 *)(in_EAX + 0x324)) {
  case 1:
    iVar1 = FUN_002ea01d(0x48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013bef0();
      return puVar2;
    }
    break;
  case 2:
    iVar1 = FUN_002ea01d(0x50);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013c9e0();
      return puVar2;
    }
    break;
  case 3:
    iVar1 = FUN_002ea01d(0x28);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013d440();
      return puVar2;
    }
    break;
  case 4:
    iVar1 = FUN_002ea01d(0x38);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013cf10();
      return puVar2;
    }
    break;
  case 5:
    iVar1 = FUN_002ea01d(0x20);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013da10();
      return puVar2;
    }
    break;
  case 6:
    iVar1 = FUN_002ea01d(0x44);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013b5e0();
      return puVar2;
    }
    break;
  case 7:
    iVar1 = FUN_002ea01d(0x34);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013b9b0();
      return puVar2;
    }
    break;
  case 8:
    iVar1 = FUN_002ea01d(0x30);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013c590();
      return puVar2;
    }
    break;
  case 9:
    iVar1 = FUN_002ea01d(0x3c);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013e8a0();
      return puVar2;
    }
    break;
  case 10:
    iVar1 = FUN_002ea01d(100);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013e980();
      return puVar2;
    }
    break;
  case 0xb:
    iVar1 = FUN_002ea01d(0x20);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013ef20();
      return puVar2;
    }
    break;
  case 0xc:
    iVar1 = FUN_002ea01d(0x50);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013f0e0();
      return puVar2;
    }
    break;
  case 0xd:
    iVar1 = FUN_002ea01d(0x44);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013f1c0();
      return puVar2;
    }
    break;
  case 0xe:
    iVar1 = FUN_002ea01d(0x48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013dd80();
      return puVar2;
    }
    break;
  case 0xf:
    iVar1 = FUN_002ea01d(0x48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013f000();
      return puVar2;
    }
    break;
  case 0x10:
    iVar1 = FUN_002ea01d(0x20);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013c800();
      return puVar2;
    }
    break;
  case 0x11:
    iVar1 = FUN_002ea01d(0x40);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013b940();
      return puVar2;
    }
    break;
  case 0x12:
    iVar1 = FUN_002ea01d(0x40);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013b900();
      return puVar2;
    }
    break;
  case 0x13:
    iVar1 = FUN_002ea01d(0x20);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013b8d0();
      return puVar2;
    }
    break;
  case 0x14:
    iVar1 = FUN_002ea01d(0x40);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013db80();
      return puVar2;
    }
    break;
  case 0x15:
    iVar1 = FUN_002ea01d(0x40);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0013ef70();
      return puVar2;
    }
    break;
  default:
    puVar2 = (undefined4 *)FUN_002ea01d(0x20);
    if (puVar2 != (undefined4 *)0x0) {
      *(byte *)(puVar2 + 7) = *(byte *)(puVar2 + 7) & 0xfe;
      *puVar2 = &PTR_LAB_0039d8f0;
      puVar2[6] = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[3] = 0;
      *(byte *)(puVar2 + 7) = *(byte *)(puVar2 + 7) & 0xc1;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}
