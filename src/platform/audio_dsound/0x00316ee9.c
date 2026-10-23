/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78F4A5D32D32681804C1D7CA9B249C4D6CED0E3293E098269DE7920544F4D1ED
 * Entry: 0x00316ee9, Ghidra index: 12166, label: CMcpxStream_Flush
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__CMcpxStream_Flush(int param_1)

{
  char cVar1;
  int *in_ECX;
  uint uVar2;
  int unaff_FS_OFFSET;
  
  cVar1 = *(char *)(unaff_FS_OFFSET + 0x24);
  if ((*(byte *)((int)in_ECX + 0x12) & 1) == 0) goto LAB_00316fb7;
  FUN_003118f0();
  uVar2 = 0;
  do {
    (**(code **)(*in_ECX + 0x1c))(uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  uVar2 = 0;
  do {
    FUN_00316e24(uVar2,0x80004004);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  in_ECX[0x66] = 0;
  FUN_00318851(0);
  FUN_00311923();
  FUN_00318786();
  FUN_00316d57(in_ECX + 0x2c,0x80004004);
  if ((*(byte *)(in_ECX[0x22] + 10) & 4) == 0) {
LAB_00316fa1:
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x18))(2,0,0,0);
      goto LAB_00316fb7;
    }
  }
  else {
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x18))(1,0,0,0);
      goto LAB_00316fa1;
    }
    FUN_00316b69();
  }
  FUN_00316dcd();
LAB_00316fb7:
  if (param_1 == 0) {
    *(ushort *)((int)in_ECX + 0x12) = *(ushort *)((int)in_ECX + 0x12) & 0xcfff;
  }
  return;
}
