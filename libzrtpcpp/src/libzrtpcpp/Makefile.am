# Copyright (C) 2006 Werner Dittmann.
#
# This file is free software; as a special exception the author gives
# unlimited permission to copy and/or distribute it, with or without
# modifications, as long as this notice is preserved.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

SUBDIRS = crypto

AUTOMAKE_OPTIONS = no-dependencies dist-shar
ccxxincludedir=$(includedir)/libzrtpcpp

ccxxinclude_HEADERS = Base32.h        ZrtpPacketBase.h      ZrtpPacketDHPart.h    ZrtpPacketHello.h \
		  ZIDFile.h       ZrtpPacketClearAck.h  ZrtpPacketError.h     ZrtpStateClass.h \
		  ZIDRecord.h     ZrtpPacketCommit.h    ZrtpPacketGoClear.h   ZrtpStates.h \
		  ZrtpCallback.h  ZrtpPacketConf2Ack.h  zrtpPacket.h          ZrtpTextData.h \
		  ZRtp.h          ZrtpPacketConfirm.h   ZrtpPacketHelloAck.h


# kdoc:
#	kdoc -f html -d $(KDOC_DIR) -L$(KDOC_DIR) -n ccrtp $(ccxxinclude_HEADERS)
