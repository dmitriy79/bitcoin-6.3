#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#include <string>

// Принудительно завышаем версию клиента для прохождения проверок сети
#define CLIENT_VERSION_MAJOR       0
#define CLIENT_VERSION_MINOR       21
#define CLIENT_VERSION_REVISION    0
#define CLIENT_VERSION_BUILD       0

static const int CLIENT_VERSION =
                           1000000 * CLIENT_VERSION_MAJOR
                         +   10000 * CLIENT_VERSION_MINOR 
                         +     100 * CLIENT_VERSION_REVISION
                         +       1 * CLIENT_VERSION_BUILD;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;

// Актуальная версия сетевого протокола
static const int PROTOCOL_VERSION = 70016;

// ПОДНИМАЕМ МИНИМАЛЬНЫЕ ВЕРСИИ ДЛЯ СОВМЕСТИМОСТИ:
// Разрешаем подключаться только к узлам с современным протоколом
static const int MIN_PROTO_VERSION = 70002;

// Время в CAddress поддерживается всеми современными нодами
static const int CADDR_TIME_VERSION = 31402;

// Диапазоны версий без поддержки блоков (оставляем как в оригинале)
static const int NOBLKS_VERSION_START = 32000;
static const int NOBLKS_VERSION_END = 32400;

// Сообщения PONG (BIP 0031) гарантированно включены
static const int BIP0031_VERSION = 60000;

#endif // BITCOIN_VERSION_H
