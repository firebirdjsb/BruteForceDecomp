/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 85DB5AD58D6BBC6D89AB8D1A69F2C82872991EBD0A33C68215317769E0F790D2
 * Entry: 0x00346207, Ghidra index: 12829, label: bind
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_xonline_context_bytes_x86.h"
int __thiscall XONLINES__bind(XONLINES *this,int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  int iVar2;
  
  if ((this == (XONLINES *)0x0) || (*(short *)(this + 0xbd2) == 0)) {
    iVar2 = 0x276d;
  }
  else {
    iVar1 = FUN_003454a2(__fd);
    if (iVar1 == 0) {
      return -1;
    }
    if ((*(byte *)(iVar1 + 0xc) & 0x20) == 0) {
      if (*(int *)(__addr->sa_data + 2) == 0) {
        iVar2 = FUN_003457b3(iVar1,*(undefined2 *)__addr->sa_data);
        if (iVar2 < 0) {
          iVar2 = RtlNtStatusToDosError(iVar2);
        }
        else {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x2741;
      }
    }
    else {
      iVar2 = 0x2726;
    }
    *(undefined4 *)(iVar1 + 8) = 0x2b434f53;
    if (iVar2 == 0) {
      return 0;
    }
  }
  XAPILIB__SetLastError(iVar2);
  return -1;
}
